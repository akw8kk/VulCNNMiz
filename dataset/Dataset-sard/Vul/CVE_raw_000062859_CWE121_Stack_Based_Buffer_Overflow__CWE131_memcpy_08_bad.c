void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        VAR1 = (int *)FUN3(10);
    }
    {
        int VAR2[10] = {0};
        
        memcpy(VAR1, VAR2, 10*sizeof(int));
        FUN4(VAR1[0]);
    }
}