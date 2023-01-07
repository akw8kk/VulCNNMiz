void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        
        VAR1 = (int *)malloc(10);
    }
    {
        int VAR3[10] = {0};
        
        memcpy(VAR1, VAR3, 10*sizeof(int));
        FUN2(VAR1[0]);
        free(VAR1);
    }
}