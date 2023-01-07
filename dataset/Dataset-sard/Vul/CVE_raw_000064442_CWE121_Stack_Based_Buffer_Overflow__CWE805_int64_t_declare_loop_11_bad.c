void FUN1()
{
    VAR1 * VAR2;
    int64_t VAR3[50];
    int64_t VAR4[100];
    if(FUN2())
    {
        
        VAR2 = VAR3;
    }
    {
        int64_t VAR5[100] = {0}; 
        {
            size_t VAR6;
            
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR2[VAR6] = VAR5[VAR6];
            }
            FUN3(VAR2[0]);
        }
    }
}