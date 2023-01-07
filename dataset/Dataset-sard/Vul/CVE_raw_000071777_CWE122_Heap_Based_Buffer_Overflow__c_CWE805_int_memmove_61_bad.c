void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        int VAR2[100] = {0}; 
        
        memmove(VAR1, VAR2, 100*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}