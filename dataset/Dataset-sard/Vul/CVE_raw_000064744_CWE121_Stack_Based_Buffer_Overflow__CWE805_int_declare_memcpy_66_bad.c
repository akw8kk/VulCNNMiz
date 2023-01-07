void FUN1()
{
    int * VAR1;
    int * VAR2[5];
    int VAR3[50];
    int VAR4[100];
    
    VAR1 = VAR3;
    
    VAR2[2] = VAR1;
    FUN2(VAR2);
}