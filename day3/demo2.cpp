#include<stdio.h>


int g=11;
namespace ns1
{
    int connector=2200;
    namespace nns
    {
        int var=88;
    }
}
namespace ns2
{
    int connector=3307;
    int n1=22;
    int n2=23;
    int n3=24;
    int n4=25;
    int n5=26;
    int n6=27;

}

int main()
{
    printf("\n gb vari g=%d",g);
    printf("\n gb vari g=%d",::g);
    printf("\n connector vari connector=%d",ns1::connector);
    printf("\n ns1::nns::var=%d",ns1::nns::var);
    printf("\n n1=%d",ns2::n1);
    using namespace ns2;
    printf("\n n1=%d",n1);
    return 0;
}