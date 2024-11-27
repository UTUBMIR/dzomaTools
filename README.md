im new to use github and git...
library will extend over the time

```cpp

int number;
inputNumbers(&number, 1, "Enter number: ", 0);//number contains recived data, 1 because just one number. "Enter number: " - is text shoowed before input, in which can be %d, %d is (index + 0) - 0 is 4th argument.

int inputBuffer[5] {};
inputNumbers(inputBuffer, 5, "Enter index# %d: ", 0);//inputBuffer contains recived data, 5 is lenght of buffer. "Enter index# %d: " - is text before each input, in which can be %d, %d is (index + 0) - 0 is 4th argument.

if (ask("do you know c++?")) {//prints "do you know c++?(y/n): "
  printf("cool!\n");//if 'y' then
}
else {
  printf("WHAT???\n");//if 'n' then
}
```
