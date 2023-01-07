void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char VAR3[100] = VAR4;
    VAR1 = VAR3;
    {
        
        size_t VAR5 = strlen(VAR1);
        
        if (100-VAR5 > 1)
        {
            
            if (fgets(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                
                VAR5 = strlen(VAR1);
                if (VAR5 > 0 && VAR1[VAR5-1] == '')
                {
                    VAR1[VAR5-1] = '';
                }
            }
            else
            {
                FUN2("");
                
                VAR1[VAR5] = '';
            }
        }
    }
    
    VAR2[2] = VAR1;
    FUN3(VAR2);
}