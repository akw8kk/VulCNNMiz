static void FUN1()
{
    int VAR1;
    VAR2 * VAR3;
    VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = VAR5;
    }
    {
        int64_t VAR6[100] = {0}; 
        {
            size_t VAR7;
            
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR3[VAR7] = VAR6[VAR7];
            }
            FUN3(VAR3[0]);
        }
    }
}