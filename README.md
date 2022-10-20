my-tty
===
Just reference to lkmpg cp13.1

#how to use?
## Module part (only)
1. `make`
2. just insmod and see result


- Success
```
ben@ben-OptiPlex-7060:/working/ben/module/my-tty$ sudo insmod tty-test-module.ko
The module has been inserted.  Hello world!
ben@ben-OptiPlex-7060:/working/ben/module/my-tty$ sudo rmmod tty-test-module.ko
The module has been removed.  Farewell world!
```

- Fail
if show nothing
```
ben@ben-OptiPlex-7060:/working/ben/module/my-tty$ sudo insmod tty-test-module.ko
ben@ben-OptiPlex-7060:/working/ben/module/my-tty$ sudo rmmod tty-test-module.ko
```

see dmesg
```
[170259.932056] [my_print_string]: The module has been inserted.
[170259.932059] [my_print_string]: Cannot get current_tty!
[170264.311494] [my_print_string]: The module has been removed.
[170264.311495] [my_print_string]: Cannot get current_tty!
```
