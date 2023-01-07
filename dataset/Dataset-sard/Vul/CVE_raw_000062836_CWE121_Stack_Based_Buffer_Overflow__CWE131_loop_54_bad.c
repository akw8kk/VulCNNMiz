void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    
    VAR1 = (int *)FUN2(10);
    FUN3(VAR1);
}