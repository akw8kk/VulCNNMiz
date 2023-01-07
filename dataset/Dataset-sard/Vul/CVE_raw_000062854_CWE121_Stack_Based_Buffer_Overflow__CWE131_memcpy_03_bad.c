void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(5==5)
    {
        
        VAR1 = (int *)FUN2(10);
    }
    {
        int VAR2[10] = {0};
        
        memcpy(VAR1, VAR2, 10*sizeof(int));
        FUN3(VAR1[0]);
    }
}