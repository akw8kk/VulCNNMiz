static void FUN1()
{
    VAR1 * VAR2;
    VAR1 * VAR3 = (VAR1 *)FUN2(50*sizeof(VAR1));
    VAR1 * VAR4 = (VAR1 *)FUN2(100*sizeof(VAR1));
    
    VAR2 = VAR4;
    {
        VAR1 * VAR5 = VAR2;
        VAR1 * VAR2 = VAR5;
        {
            int64_t VAR6[100] = {0}; 
            {
                size_t VAR7;
                
                for (VAR7 = 0; VAR7 < 100; VAR7++)
                {
                    VAR2[VAR7] = VAR6[VAR7];
                }
                FUN3(VAR2[0]);
            }
        }
    }
}