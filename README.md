# Laboratory Exercise

## Laboratory Objectives
1. Explore and use various tools such as: GitHub, VirtualBox, Tuffix, Linux Terminal, and Atom.
1. Write and compile C++ code using:
     1. dynamic memory allocation
     2. search and sorting
1. Run and test executable files.

## Getting Started
1. Open the Terminal program in Tuffix.
1. Change the present working directory to the `Documents` directory by typing the following command at the command prompt:

    ```
    cd Documents
    ```

1. Make a copy of this Github repository on your computer using the `git` and `clone` commands that you will input to the terminal. The commands take a URL as a parameter to specify where it can get a copy of the repository. You can find the URL by clicking on the green *Clone or download* button at the top right part of this page. Copy the URL and replace the example text shown below. Note that `username` should be replaced with your own Github username. When you hit <kbd>Enter</kbd> it will ask you to provide your Github username and password. Once done, you will have a copy of the repository on your computer.
    ```
    git clone https://github.com/CSUF-CPSC121-STMAY-2021S/lab08-username.git
    ```
1. Navigate into the new directory using the command line. Note that `username` should be replaced with your own Github username.  As a shortcut, you can type the first few letters of the folder name and press <kbd>Tab</kbd> so that it auto completes the folder name for you.

     ```
     cd lab08-username
     ```
     
## Instructions
1. Title Comment Block
     1. Create your source code file named `main.cpp`, and at the very top of the source code use three one line comments to document your name, date, and the exercise, using the following format:
          <pre>Name: <i>Stephen May</i><br>Date: 01/01/2021<br>Exercise: Labxx Solution</pre>



1. Write a C++ program that performs as a Tuffy Titan Product Inventory system which presents the user a main menu to enter a product, display the product list, and displays details on a specific product.

1. Your Product class should meet the following requirements:
     1. Declare a `Product` class in a specification file named `products.hpp`.
     1. Define all member functions that are not inline member functions in an implementation file named `products.cpp`.
     1. Declare a constructor member function that initializes a member variable to zero which will keep track of the number of elements in a dynamically allocated array.
     1. Declare a public member function named `setProduct` which takes the product code, name, and cost arguments and adds them to a member variable array.  Your class should implement dynamic memory allocation to accommodate any size array.  Since this function would be increasing the array size by one, your class would most likely follow the below steps:
          1. dynamically allocate a temporary array with the increased size
          1. copy the contents from the member variable stored array to the temporary array
          1. add the new data to the temporary array
          1. delete the member variable stored array
          1. assign the temporary array to the member variable stored array
          1. increase the number of elements member variable
     1. Declare a public member function named `getNumElements` to return the number of products.
     1. Declare a public member function named `getNameFromElement` to return the name of the product given an element number in the list.
     1. Declare a public member function named `getCodeFromElement` to return the code of the product given an element number in the list.
     1. Declare a public member function named `getCostFromElement` to return the cost of the product given an element number in the list.
     1. Declare a public member function named `getNameFromCode` to return the name of the product given the code of the product.
     1. Declare a public member function named `getCostFromCode` to return the cost of the product given the code of the product.
     1. Declare a public member function named `getCostFromCode` to return the cost of the product given the code of the product.
     1. Declare a destructor member function that deletes the memory associated with the array of products.

1. Compile the file using the command below. The `-std` option tells the compiler that it will use C++ version 17 standards and the `-o main` option tells the compiler to place the executable code into a file called `main`.

    ```
    clang++ -std=c++17 main.cpp products.cpp -o main
    ```
1. Run the program using the command below and repeat the steps above until you are satisfied your program output meets the above requirements.  I strongly suggest that you run your program using each of the sample outputs below and ensure that all blank lines and new lines are exactly as below.  Note that there are 2 blank lines between amount inserted and the dispensed or error output.

    ```
    ./main
    ```


1. Typical input and output for the program:
     ```
             *** TUFFY TITAN PRODUCT INVENTORY MAIN MENU ***

     1) Enter product information
     2) Display product list
     3) Display details on a specific product
     4) Exit the program

     Enter your choice: 1
     Enter Name: CPSC-121 Textbook

     Enter Cost: 39.45

     Enter Code: 3982


             *** TUFFY TITAN PRODUCT INVENTORY MAIN MENU ***

     1) Enter product information
     2) Display product list
     3) Display details on a specific product
     4) Exit the program

     Enter your choice: 1
     Enter Name: Notebook

     Enter Cost: 2.59

     Enter Code: 3098


             *** TUFFY TITAN PRODUCT INVENTORY MAIN MENU ***

     1) Enter product information
     2) Display product list
     3) Display details on a specific product
     4) Exit the program

     Enter your choice: 1
     Enter Name: Pencils

     Enter Cost: 4.89

     Enter Code: 284


             *** TUFFY TITAN PRODUCT INVENTORY MAIN MENU ***

     1) Enter product information
     2) Display product list
     3) Display details on a specific product
     4) Exit the program

     Enter your choice: 2

     ============= PRODUCT LIST ==============
     Name                         Cost Code   
     ========================= ======= =======
     CPSC-121 Textbook           39.45 3982   
     Notebook                     2.59 3098   
     Pencils                      4.89 284    

             *** TUFFY TITAN PRODUCT INVENTORY MAIN MENU ***

     1) Enter product information
     2) Display product list
     3) Display details on a specific product
     4) Exit the program

     Enter your choice: 3
     Enter Code: 3098

     Name: Notebook
     Cost: 2.59
     Code: 3098

             *** TUFFY TITAN PRODUCT INVENTORY MAIN MENU ***

     1) Enter product information
     2) Display product list
     3) Display details on a specific product
     4) Exit the program

     Enter your choice: 4
     ```

1. Run the unit testing program to ensure that your program runs as expected using predefined user input.

    ```
    make test
    ```
    
    <i>Note: You will be prompted to install the cmake program the first time you run the make test command on the device you are working on.  Answer `Yes` to install the program, and you will need to enter the Tuffix superuser (sudo) password, which should be `student`. After you have installed the cmake program, run the `make test` command again.</i>
    
    The unit testing will output the results of a series of tests using specific input and expected output.  Any error will stop the unit testing and will provide information on where the expected output is different from the actual output.  You will need to edit your source code to fix the error, recompile your program, and run `make test` repeatedly until it passes all the test.

## Submission
Periodically throughout the exercise, and when you have completed the exercise, **submit the complete repository to Github**.

   <pre>git add .<br>git commit -m "<i>your comment</i>"<br>git push</pre>

In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

   <pre>git config --global user.email "<i>tuffy@csu.fullerton.edu</i>"<br>git config --global user.name "<i>Tuffy Titan</i>"<br>git commit -m "<i>your comment</i>"<br>git push</pre>

When you completed the final Github push, go back into github.com through the browser interface and ensure all your files have been correctly updated.  You should have the following files:
    <pre>main.cpp<br>main<br>products.hpp<br>products.cpp<br>unittest.xml (in the test folder)</pre>
    
## Grading
1. All points add up to a total of 100 points possible as detailed below.  Partial credit will be given where applicable.

| Points | Description |
| --- | --- |
|50|initial git clone of this repository to your Tuffix machine|
|5|main.cpp file submitted contains the main program structure and meets the program requirements|
|5|main executable file submitted runs without crashing|
|10|products.hpp file submitted contains the Products class declaration and meets the program requirements|
|10|products.cpp file submitted contains the Products class member functions and meets the program requirements|
|20|unit testing results submitted pass each test|
