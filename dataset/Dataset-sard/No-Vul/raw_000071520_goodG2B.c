static void FUN1()
{
    int VAR1;
    VAR2 * VAR3;
    VAR3 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
    }
    {
        int64_t VAR4[100] = {0}; 
        {
            size_t VAR5;
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR3[VAR5] = VAR4[VAR5];
            }
            FUN2(VAR3[0]);
            free(VAR3);
        }
    }
}