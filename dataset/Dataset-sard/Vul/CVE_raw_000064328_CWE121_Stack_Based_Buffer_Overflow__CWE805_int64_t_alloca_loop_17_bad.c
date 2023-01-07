void FUN1()
{
    int VAR1;
    VAR2 * VAR3;
    VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = VAR4;
    }
    {
        int64_t VAR6[100] = {0}; 
        {
            size_t VAR1;
            
            for (VAR1 = 0; VAR1 < 100; VAR1++)
            {
                VAR3[VAR1] = VAR6[VAR1];
            }
            FUN3(VAR3[0]);
        }
    }
}