![Access Specifiers OOP](https://user-images.githubusercontent.com/94698587/236525163-73495662-cea9-46c6-bed5-272e51614a3b.jpg)

The standard C++ library contains a large number of header files, each providing various functions and classes for different purposes. 
Here are some common header files and their functionalities:

<iostream>: Input/output stream header file, including cout, cin, and cerr.

<string>: String manipulation functions and classes.

<cmath>: Mathematical functions such as sqrt, sin, cos, and tan.

<algorithm>: A collection of common algorithms such as std::sort, std::max, and std::min.

<vector>: A container class that stores a dynamic array of elements.

<map>: A container class that stores elements as key-value pairs.

<queue>: A container class that stores elements in a first-in-first-out (FIFO) order.

<stack>: A container class that stores elements in a last-in-first-out (LIFO) order.

<fstream>: File input/output operations.

<chrono>: Time-related functions and classes.

Note that this is not an exhaustive list, and there are many more header files available in the standard C++ library. 
The best way to learn about each header file and its functions is to consult the documentation or a reference book on C++.

About the header File #include<bits/stdc++.h>

The bits/stdc++.h header is not an official C++ header file and is not part of the standard library. 
It is a non-standard header file that includes all standard C++ headers. It is commonly used by beginners to avoid the hassle of including individual headers.

However, the use of bits/stdc++.h is generally discouraged for several reasons. First, it is not part of the standard library, and different compilers may have different implementations of this header file. 
Second, it may slow down the compilation time of your program since it includes all standard headers, even if they are not needed by your program.
Instead of using bits/stdc++.h, it is recommended to include only the necessary header files for your program. 
This not only makes your program faster but also avoids potential compatibility issues with different compilers.
In summary, the bits/stdc++.h header file is not recommended to be used in professional programming practices,
 and you should explicitly include only the headers that you need.
