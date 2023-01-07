void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        int VAR2[10] = {0};
        
        memcpy(VAR1, VAR2, 10*sizeof(int));
        FUN3(VAR1[0]);
    }
}