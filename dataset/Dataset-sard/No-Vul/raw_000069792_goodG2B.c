static void FUN1()
{
    int VAR1;
    int * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (int *)malloc(10*sizeof(int));
    }
    {
        int VAR3[10] = {0};
        size_t VAR4;
        
        for (VAR4 = 0; VAR4 < 10; VAR4++)
        {
            VAR2[VAR4] = VAR3[VAR4];
        }
        FUN2(VAR2[0]);
        free(VAR2);
    }
}