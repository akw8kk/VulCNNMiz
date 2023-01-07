void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
    {
        
        size_t VAR3 = strlen(VAR1);
        
        if (100-VAR3 > 1)
        {
            
            if (fgets(VAR1+VAR3, (int)(100-VAR3), stdin) != NULL)
            {
                
                VAR3 = strlen(VAR1);
                if (VAR3 > 0 && VAR1[VAR3-1] == '')
                {
                    VAR1[VAR3-1] = '';
                }
            }
            else
            {
                FUN2("");
                
                VAR1[VAR3] = '';
            }
        }
    }
    break;
    default:
        
        FUN2("");
        break;
    }
    switch(7)
    {
    case 7:
    {
        char VAR4[100] = "";
        
        FUN3(VAR4, 100-1, VAR1);
        FUN2(VAR4);
    }
    break;
    default:
        
        FUN2("");
        break;
    }
}