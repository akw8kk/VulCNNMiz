void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    
    VAR1 = (int *)malloc(10);
    {
        int VAR2[10] = {0};
        
        memmove(VAR1, VAR2, 10*sizeof(int));
        FUN2(VAR1[0]);
        free(VAR1);
    }
}