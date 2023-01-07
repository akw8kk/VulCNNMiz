void FUN1()
{
    int VAR1;
    int * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (int *)malloc(10);
    }
    {
        int VAR3[10] = {0};
        size_t VAR1;
        
        for (VAR1 = 0; VAR1 < 10; VAR1++)
        {
            VAR2[VAR1] = VAR3[VAR1];
        }
        FUN2(VAR2[0]);
        free(VAR2);
    }
}