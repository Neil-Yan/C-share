> ## Classs
> - PascalNamingConvention
>   - the first letter of every word should be uppercase

> ## Methods
> - camelNamingConvention
>   - the first letter of every word should be uppercase except the first word

> ## Java Literals
> #### 1. Boolean Literals
> - <mark>boolean</mark> `flag1 = false;`
> - <mark>boolean</mark> `flag2 = true;`
> #### 2. Interger Literals
>> 1. binary (base 2)
>> `int binNumber = 0b10010;` // 0b represents binary
>> 2. decimal (base 10)
>> `int decNumber = 34;`
>> 3. octal (base 8)
>> `int octalNumber = 027;`
>> 4. hexadecimal (base 16)
>> `int hexNumber = 0x2F;` // 0x represents hexadecimal
> #### 3. Floating-point Literals
>> A floating-point literal is a numeric literal that has either a fractional form or an exponential form.
>> `3.445e2 == 3.445*10^2`
> #### 4. Character Literals
>> Character literals are unicode character enclosed inside <mark>single quotes</mark>. 
>> `char letter = 'a';`
>> - escape characters
>> `\b (backspace), \t (tab), \n (new line)`
> #### 5. String literals
>> A string literal is a sequence of characters enclosed inside <mark>double-quotes</mark>.

> ## Data Type
> #### 1. Primitive Types (simple objects)
>> - can use underscore `-` to seperate every 3 digits
>>   - e.g `int viewsCount = 123_456_789`
>> 1. byte (1)
>> 2. short (2)
>> 3. int (4)
>> 4. long (8)
>>      - put `L` at the end of interger
>>      - e.g `long viewsCount = 3_123_456_789L`
>> 5. float (4)
>>      - put `F` at the end of floating point number, otherwise, Java will consider it as a double
>>      - e.g `float price = 10.99F`
>> 6. double (8)
>> 7. char (2)
>> 8. boolean (1)
> #### 2. Reference Types (complex objects)


> ## String Methods
> - #### `.trim()`
>   - remove trailing white spaces
> - #### `.replace(target, replacement)`
>   - replace `target` as `replacement`
> - #### `.startsWith(str)` &  `.endsWith(str)`
>   - will return `true` or `false`
> - #### `.length()`
>   - length of string
> - #### `.indexOf(char)`
>   - find the index of first occurrence of `char`