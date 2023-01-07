void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        
        VAR1 = (int *)FUN2(10);
    }
    {
        int VAR3[10] = {0};
        
        memcpy(VAR1, VAR3, 10*sizeof(int));
        FUN3(VAR1[0]);
    }
}