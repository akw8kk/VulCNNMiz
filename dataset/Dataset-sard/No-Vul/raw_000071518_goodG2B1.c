static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
        break;
    }
    {
        int64_t VAR3[100] = {0}; 
        {
            size_t VAR4;
            
            for (VAR4 = 0; VAR4 < 100; VAR4++)
            {
                VAR2[VAR4] = VAR3[VAR4];
            }
            FUN3(VAR2[0]);
            free(VAR2);
        }
    }
}