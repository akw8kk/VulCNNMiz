void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(10);
    VAR2 = VAR1;
    FUN2();
}