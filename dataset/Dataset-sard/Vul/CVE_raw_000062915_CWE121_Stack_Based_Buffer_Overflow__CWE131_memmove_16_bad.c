void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (int *)FUN2(10);
        break;
    }
    {
        int VAR2[10] = {0};
        
        memmove(VAR1, VAR2, 10*sizeof(int));
        FUN3(VAR1[0]);
    }
}