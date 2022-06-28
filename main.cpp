#include "mainHeader.h"

using namespace std;
int main(){
    quiq();
    bucket_main();
    system("ffmpeg -f image2 -framerate 1 -i \"plot%01d.png\" output.gif");
}
