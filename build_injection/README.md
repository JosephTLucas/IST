# Example of Build Process Injection

Built for an Institute for Security and Technology (IST) Brown Bag Lunch.

This example is designed to be as simple as possible for a broad audience, requiring minimal ability to read code. There are many hand-waves and deviations from best practices.

The example should illustrate the following:  
1) What `source code` is. It's human readable and often the component that gets audited.  
2) What a simple `build process` is. Here, we'll be using `make` as the abstraction, but we'll generally discuss conversion from source code to machine code.  
3) We'll discuss the difference between what gets audited and what gets deployed.  
4) We'll discuss that while source code changes frequently, build processes are often "set it and forget it".  
5) We'll demonstrate that an attacker can inject their own functionality into the binary with minimal influence to the source code.
