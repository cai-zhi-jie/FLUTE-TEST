###### tags: `EDA`

[toc]    
# FLUTE    

## source code    
https://github.com/The-OpenROAD-Project-Attic/flute

## cmake    

將Source code載完解壓所後    
```
cmake -G "Unix Makefiles"
```
![](https://i.imgur.com/UoF5p70.png)
![](https://i.imgur.com/awecPnD.png)
可以看到產生Makefile了    
因為此Makefile其實是呼叫CMakeFiles內的Makefile2    
進去修改    
![](https://i.imgur.com/lunvogP.png)
將這兩行註解(他們是範例程式)        
只留下flute.dir    
這是我們要用的obj    

![](https://i.imgur.com/zCWlpqA.png)        

接著到flute.cpp進行更改(他命名錯誤)
![](https://i.imgur.com/IyY4wEf.png)
改成`void plottree( Tree tree ) ;`    
![](https://i.imgur.com/Br4chOy.png)


回到第一個Makefile的目錄Make    
![](https://i.imgur.com/YIIG6z5.png)    
CmakeFiles/flute.dir/裡面就會生成flut.cpp.obj    
之後拿來建置自己的專案就可以了    
![](https://i.imgur.com/7GGTD4w.png)

把這兩個.dat複製到自己的專案內    
![](https://i.imgur.com/EdhB5uS.png)
![](https://i.imgur.com/q9nBUJC.png)
![](https://i.imgur.com/rcnop9v.png)

Flute_test.cpp    
```
#include <stdio.h>
#include <stdlib.h>
#include "../flute-master/flute.h"

int main()
{
    int d = 0;
    int x[10] = {0,1,3};
    int y[10] = {3,1,3};
    Flute::Tree flutetree;
    Flute::FluteState *flute1 = Flute::flute_init(FLUTE_POWVFILE, FLUTE_PORTFILE);
    flutetree = Flute::flute(flute1, 3, x, y, FLUTE_ACCURACY);
    Flute::plottree(flutetree);

    return 0;
}   


```
![](https://i.imgur.com/YpBcuG1.png)
![](https://i.imgur.com/EsHzyLH.png)


以上不是一個自動化的做法,只是一個解法    



## rand    
https://stackoverflow.com/questions/27186706/spin-verification-undefined-reference-to-random-and-srandom    

## gnu plot script   
https://courses.physics.illinois.edu/phys466/fa2018/comp_info/gnuplot.html
