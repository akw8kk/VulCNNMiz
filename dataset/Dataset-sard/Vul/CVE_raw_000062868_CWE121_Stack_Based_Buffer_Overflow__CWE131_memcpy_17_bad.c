void FUN1()
{
    int VAR1;
    int * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (int *)FUN2(10);
    }
    {
        int VAR3[10] = {0};
        
        memcpy(VAR2, VAR3, 10*sizeof(int));
        FUN3(VAR2[0]);
    }
}