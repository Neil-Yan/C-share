# 1. ARRAY

- ### Declare an integer array
  1. 1D array
     - ```java
       int[] numbers = new int[5];
       ``` 
  2. muti-Dimensional array
     - ```java
       int[][] numbers = new int[2][3];
       ```

- ### Declare an array of string
  1. declare and initialisation
     - ```java
       String[] cars  = {"Toyota", "Tesla", "BMW"};
       ```
  2. declare the size only
     - ```java
       String[] cars  = new String[3];
       cars[0] = "Toyota";
       cars[1] = "Tesla";
       cars[2] = "BMW";
       ```
> :memo: **Note:** 1 & 2 are both declare the same thing in the array 

- #### Length of an array
  - `numbers.length;`
  > :memo: **Note:** 
  > 1. array has ***fixed*** size 
  > 2. **.length** has no parenthesis

## `import java.util.Arrays;`
- ### Print whole array
  1. print 1D array
     - ```java
       Arrays.toString(numbers);
       ```
     - i.e. output: [1, 2, 3, 4, 5]
  2. print muti-Dimensional array
     - ```java
       Arrays.deepToString(numbers);
       ```
     - i.e. output: \[[1, 0, 0], [0, 0, 0]]
  
- #### Sort array
  - ```java
    Arrays.sort(numbers);
    ```




# 2. NUMBER

- #### Declare a float
  - `float pi = 3.14F;`
  - NOTE: float has suffix ***'F'***
- #### Declare a constant
  - `final float PI = 3.14F;`
  - NOTE: constant name shoule be ***uppercased***
- #### Convert string to number
  1. to Integer
     - `Interger.parseInt("150");`
     - i.e. output: 150
  2. to Float
      - `Float.parseFloat("12.4");`
      - i.e. output: 12.4
  3. to Double
      - `Double.parseDouble("12.4");`
      - i.e. output: 12.4
- #### Round a number
  - `Math.round();`
- #### Ceil a number
  - find the integer that greater than or equal to it
  - `Math.ceil(1.1F);`
  - i.e. output: 2
- #### Floor a number
  - find the interger that smaller than or equal to it
- #### Find maximum number
  - `Math.max(1, 2);`
- #### Find minimum number
  - `Math.min(1, 2);`
- #### Get random value between 0 and 1
  - `Math.random();`
  > :memo: **Note:** it returns a double

## `import java.text.NumberFormat;`
### Number format
  1. Currency format
     - `String result = NumberFormat.getCurrencyInstance().format(1234567.89);`
     - i.e. output: $1,234,567.89
  
  2. Percentage format
     - `String result = NumberFormat.getPercentInstance().format(0.1);`
     - i.e. output: 10%




# 3. INPUT

## `import java.util.Scanner;`
#### read input from keyboard
- ```java
  Scanner scanner = new Scanner(System.in);
  ```

#### read a byte
  - ```java
    String age = scanner.nextByte();
    ```

### read string
  1. read string per token
      - ```java
        String name = scanner.next();
        ```
      - input: Jackie Chan -> output: ***Jackie***
  2. read string per line
      - `String name = scanner.nextLine();`
      - - input: Jackie Chan -> output: ***Jackie Chan***

> :memo: **Note:** `scanner.close()`, is a good practice to close the scanner




# 4. String

- ### Case folding
  1. convert to lowercase
      - ```java
        String input = "Hello World!".toLowerCase()
        ```
     - i.e. value of 'input' from ***Hello World!*** to ***hello world!***
  2. convert to uppercase
     - ```java
       input = scanner.next().toUpperCase()
       ```

- #### String equality comparison
```java
String input = "apple";
input.equals("quit");
```
If input == "quit", return **true**. Otherwise, return **false**

- #### String length
```java
String input = "apple";
input.length()
```
i.e. output: 5
NOTE: **.length()** has parenthesis here

- #### Empty string checking, "`isBlank()`"
```java
Scanner scanner = new Scanner(System.in);
String name = "";

/* keep prompting untail the user enter something */
while (name.isBlank()) {
    System.out.print("Enter your name: ");
    name = scanner.nextLine();
}       
```




# 5. BOOLEAN

- #### add '()' to make code more readable
  - `boolean hasHighIncome = (income > 100_000)`
  - the RHS expression will evaluate to 'true' or 'false'
- #### Ternary operator
  - `String className = (income > 100_000) ? "First" : "Economy"`
  - If condition is true, className will be ***First***. Otherwise, it will be ***Economy***.




# 6. FOR LOOP

- #### for *each* loop
```java
String[] fruits = { "Apple", "Mango", "Orange" };
for (String fruit: fruits) {
    System.out.println(fruit);
}
```

- #### normal for loop
  - equivalent to the **for each** loop above
```java
String[] fruits = { "Apple", "Mango", "Orange" };
for (int i = 0; i < fruits.length; i++) {
    System.out.println(fruits[i]);
}
```




# 7. DIALOGUE BOX

## `import javax.swing.JOptionPane;`
- ### Read & Show message from dialogue box
  1. read message:
  ```java
  name = JOptionPane.showInputDialog("Enter your name: ");
  ```
  2. show message:
  ```java
  JOptionPane.showMessageDialog(null, "you are " + age + " years old");
  ```





# 8. Random Libarary

## `import java.util.Random;`
- generate a random integer
```java
int x;
Random random = new Random();

/* generate a random integer between 0-5 */
x = random.nextInt(6);

/* generate a random integer between 1-6 */
x = random.nextInt(6) + 1;
```

- generate a random double
```java
double x;
Random random = new Random();

/* generate a random double between 0-1 */
x = random.nextDouble();
```