void FUN1()
{
    int * VAR1;
    int * VAR2[5];
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(10);
    
    VAR2[2] = VAR1;
    FUN2(VAR2);
}