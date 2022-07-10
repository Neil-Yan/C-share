library("markovchain")
library("learnr")
library(MASS)


# Set seed for reproducible results 
set.seed(123456789)

# Read in
pdata<-read.csv("programdata.csv")

pmatrix <- new("markovchain", states = c("UB", "SB", "WS","NB"), transitionMatrix = matrix(data = c(
  0.4,0.2,0.2,0.2,0.1,0.1,0.3,0.5,0.1,0.5,0.1,0.3,0.1,0.1,0.1,0.7), byrow = T, nrow = 4), name = "programdata")
show(pmatrix)

rmarkovchain(n=1, object=pmatrix, t0="SB")

num_of_person <- nrow(pdata)

# Create a loop for the number of simulations and simulate
simulation_result <- matrix(NA, nrow = num_of_person, 
                            ncol = SIMULATION_PER_PERSON)

SIMULATION_PER_PERSON <- 1000
START_YEAR <- 2022

simulator <- function(pdata, pmatrix, year) {
  
  num_of_person <- nrow(pdata)
  object_matrix <- pmatrix^year
  for (person in 1:num_of_person) {
    benefit <- pdata[person, "benefit_22"]
    # do 1000 simulations for each person
    for (i in 1:SIMULATION_PER_PERSON) {
      simulation_result[person, i] <- rmarkovchain(n=1, object=object_matrix, t0=benefit)
    }
  }
  
  return(simulation_result)
}

# condition
for (person in 1:num_of_person) {
  if (pdata[person, "benefit_21"] == "UB" & 
      pdata[person, "benefit_22"] == "UB") {
            person[person, "new_benefit_22"] = "UB2"
    
  } else if ((pdata[person, "benefit_21"] == "UB" & 
              pdata[person, "benefit_22"] != "UB") | 
             (pdata[person, "benefit_21"] != "UB" & 
              pdata[person, "benefit_22"] == "UB")) {
            person[person, "new_benefit_22"] = "UB"
  } else {
            person[person, "new_benefit_22"] = person[person, "benefit_22"]

  }
}

# 5 years simulations
#for (year in 1:5) {
  #simulation_result <- simulator(pdata, pmatrix, year)
  #print(simulation_result)
  
  # save output to a file
  #filename <- paste("sim_matrix_", year, ".csv", sep="")
  #write.matrix(M,file=filename)
  
  #summrise_result <- table(simulation_result)
  #sprintf("Year %d:\n", START_YEAR + year)
  #print(summrise_result)
#}

# test
simulation_result <- simulator(pdata, pmatrix, 5)
simulation_result
table2027<-table(simulation_result)
year <- START_YEAR + 2
fil