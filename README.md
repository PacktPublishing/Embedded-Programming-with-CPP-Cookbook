


# Embedded Programming with Modern C++ Cookbook
Embedded Programming with Modern C++ Cookbook by Packt Publishing

## Erratas

On page 62 "Create a file called CMakeLists.txt in the loop subdirectory" should read 
           "Create a file called CMakeLists.txt in the fixed_types subdirectory".

On page 65 "Create a file called CMakeLists.txt in the loop subdirectory" should read
           "Create a file called CMakeLists.txt in the sizet subdirectory".

On page 67 "Use your favorite text editor to create a file called loop.cpp in the loop subdirectory" should read
           "Use your favorite text editor to create a file called endianness.cpp in the endianness subdirectory".

On page 68 "Create a file called CMakeLists.txt in the loop subdirectory" should read
           "Create a file called CMakeLists.txt in the endianness subdirectory".

On page 72 "Create a file called CMakeLists.txt in the loop subdirectory" should read
           "Create a file called CMakeLists.txt in the enconv subdirectory".

On page 75 "Use your favorite text editor to create a file called alignment.cpp in the loop subdirectory" should read
           "Use your favorite text editor to create a file called alignment.cpp in the alignment subdirectory.".

On page 76 "Create a file called CMakeLists.txt in the loop subdirectory" should read
           "Create a file called CMakeLists.txt in the alignment subdirectory".

On page 82 "Create a file called CMakeLists.txt in the loop subdirectory" should read
           "Create a file called CMakeLists.txt in the cache_align subdirectory".

On page 139 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the prealloc subdirectory".

On page 142 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the objpool subdirectory".

On page 149 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the ringbuf subdirectory".

On page 156 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the shmem subdirectory".

On page 167 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the threads subdirectory".

On page 170 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the mutex subdirectory".

On page 174 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the condvar subdirectory".

On page 179 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the atomic subdirectory".

On page 183 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the memorder subdirectory".

On page 187 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the lockfree subdirectory".

On page 192 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the shmatomic subdirectory".

On page 197 "Create a file called CMakeLists.txt in the loop subdirectory" should read
            "Create a file called CMakeLists.txt in the async subdirectory".
### Download a free PDF

 <i>If you have already purchased a print or Kindle version of this book, you can get a DRM-free PDF version at no cost.<br>Simply click on the link to claim your free PDF.</i>
<p align="center"> <a href="https://packt.link/free-ebook/9781838821043">https://packt.link/free-ebook/9781838821043 </a> </p>

## common issue
QEMU terminal with 2019-07-10-raspbian-buster-lite.img、kernel-qemu-4.14.79-stretch and versatile-pb.dtb, command like: `sudo apt-get install cmake -y` will cause error **404  Not Found**

``` bash[]
pi@raspberrypi:~$ sudo apt-get install cmake -y
Reading package lists... Done
Building dependency tree       
Reading state information... Done
The following additional packages will be installed:
  cmake-data libarchive13 libjsoncpp1 librhash0 libuv1
Suggested packages:
  cmake-doc ninja-build lrzip
The following NEW packages will be installed:
  cmake cmake-data libarchive13 libjsoncpp1 librhash0 libuv1
0 upgraded, 6 newly installed, 0 to remove and 0 not upgraded.
Need to get 366 kB/4,600 kB of archives.
After this operation, 22.5 MB of additional disk space will be used.
Err:1 http://raspbian.raspberrypi.org/raspbian buster/main armhf libarchive13 armhf 3.3.3-4
  404  Not Found [IP: 93.93.128.193 80]
Err:2 http://raspbian.raspberrypi.org/raspbian buster/main armhf libuv1 armhf 1.24.1-1
  404  Not Found [IP: 93.93.128.193 80]
E: Failed to fetch http://raspbian.raspberrypi.org/raspbian/pool/main/liba/libarchive/libarchive13_3.3.3-4_armhf.deb  404  Not Found [IP: 93.93.128.193 80]
E: Failed to fetch http://raspbian.raspberrypi.org/raspbian/pool/main/libu/libuv1/libuv1_1.24.1-1_armhf.deb  404  Not Found [IP: 93.93.128.193 80]
E: Unable to fetch some archives, maybe run apt-get update or try with --fix-missing?
```

**Solution**
``` bash[]
sudo apt-get update --allow-releaseinfo-change
sudo apt-get update
sudo apt-get install cmake -y
```
