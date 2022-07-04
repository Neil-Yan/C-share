# ARRAY
- ### Declare an array
  1. #### 1D array
     - `int[] numbers = new int[5]` 
  2. #### muti-Dimensional array
     - `int[][] numbers = new int[2][3];`

- #### get length of an array
  - `numbers.length`
  - NOTE: array has <mark>fixed</mark> size

## `import java.util.Arrays;`
- ### print whole array
  1. #### 1D array
     - `Arrays.toString(numbers)`
     - i.e. output: [1, 2, 3, 4, 5]
  2. #### muti-Dimensional array
     - `Arrays.deepToString(numbers)`
     - i.e. output: \[[1, 0, 0], [0, 0, 0]]
  
- #### sort array
  - `Arrays.sort(numbers)`

# NUMBER
- #### Declare a float
  - `float pi = 3.14F`
  - NOTE: float has suffix <mark>'F'</mark>
- #### Declare a constant
  - `final float PI = 3.14F`
  - NOTE: constant name shoule be <mark>uppercased</mark>
- #### Convert string to number
  1. to Integer
     - `Interger.parseInt("150")`
     - i.e. output: 150
  2. to Float
      - `Float.parseFloat("12.4")`
      - i.e. output: 12.4
  3. to Double
      - `Double.parseDouble("12.4")`
      - i.e. output: 12.4
- #### Round a number
  - `Math.round()`
- #### Ceil a number
  - find the integer that greater than or equal to it
  - `Math.ceil(1.1F)`
  - i.e. output: 2
- #### Floor a number
  - find the interger that smaller than or equal to it
- #### Find maximum number
  - `Math.max(1, 2)`
- #### Find minimum number
  - `Math.min(1, 2)`
- #### Get random value between 0 and 1
  - `Math.random()`
  - NOTE: this return a double

## `import java.text.NumberFormat;`
  - Perform currency format
    - `String result = NumberFormat.getCurrencyInstance().format(1234567.89)`
    - i.e. output: $1,234,567.89
  
  - Perform percentage format
    - `String result = NumberFormat.getPercentInstance().format(0.1);`
    - i.e. output: 10%

# INPUT
## `import java.util.Scanner;`
#### read input from keyboard
- `Scanner scanner = new Scanner(System.in)`

#### read a byte
  - `String age = scanner.nextByte()`


### read string
  1. #### read string per token
      - `String name = scanner.next()`
      - input: Neil Yan -> output: Neil
  2. #### read string per line
      - `String name = scanner.nextLine()`

# BOOLEAN
- #### add '()' to make code more readable
  - `boolean hasHighIncome = (income > 100_000)`
  - this expression will evaluate to 'true' or 'false'