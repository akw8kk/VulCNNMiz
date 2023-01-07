static void FUN1()
{
    VAR1 * VAR2;
    VAR1 * VAR3 = (VAR1 *)FUN2(50*sizeof(VAR1));
    VAR1 * VAR4 = (VAR1 *)FUN2(100*sizeof(VAR1));
    switch(6)
    {
    case 6:
        
        VAR2 = VAR4;
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        int64_t VAR5[100] = {0}; 
        {
            size_t VAR6;
            
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR2[VAR6] = VAR5[VAR6];
            }
            FUN4(VAR2[0]);
        }
    }
}