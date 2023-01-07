void FUN1()
{
    int VAR1;
    VAR2 * VAR3;
    VAR3 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = (VAR2 *)malloc(50*sizeof(VAR2));
    }
    {
        int64_t VAR4[100] = {0}; 
        {
            size_t VAR1;
            
            for (VAR1 = 0; VAR1 < 100; VAR1++)
            {
                VAR3[VAR1] = VAR4[VAR1];
            }
            FUN2(VAR3[0]);
            free(VAR3);
        }
    }
}