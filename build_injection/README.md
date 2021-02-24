# Example of Build Process Injection

Built for an Institute for Security and Technology (IST) Brown Bag Lunch.

This example is designed to be as simple as possible for a broad audience, requiring minimal ability to read code. There are many hand-waves and deviations from best practices.

The example should illustrate the following:  
1) What `source code` is. It's human readable and often the component that gets audited.  
2) What a simple `build process` is. Here, we'll be using `make` as the abstraction, but we'll generally discuss conversion from source code to machine code.  
3) We'll discuss the difference between what gets audited and what gets deployed.  
4) We'll discuss that while source code changes frequently, build processes are often "set it and forget it".  
5) We'll demonstrate that an attacker can inject their own functionality into the binary with minimal influence to the source code.

In the `master` branch, we see the intended code base.  
1. `make all`  
2. `./bin/adder.o 2 3`  
3. See expected result: `2 + 3 = 5`  
4. `make clean`  

In the `malicious` branch, we see how even with the source code and "build process" remaining the same, the attacker can execute arbitrary code.  
1. `make all`  
2. `./bin/adder.o 2 3`  
3. See `Backdoor Opened` followed by the expected result: `2 + 3  = 5`. In this educational case, the attacker's code is a print statement, but it could be anything else.  
4. `make clean`  
