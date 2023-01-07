static void FUN1()
{
    int VAR1;
    int *VAR2 = &VAR1;
    int *VAR3 = &VAR1;
    
    VAR1 = -1;
    {
        int VAR1 = *VAR2;
        
        VAR1 = 100-1;
        *VAR2 = VAR1;
    }
    {
        int VAR1 = *VAR3;
        {
            char VAR4[100];
            char VAR5[100] = "";
            memset(VAR4, '', 100-1);
            VAR4[100-1] = '';
            if (VAR1 < 100)
            {
                
                memcpy(VAR5, VAR4, VAR1);
                VAR5[VAR1] = ''; 
            }
            FUN2(VAR5);
        }
    }
}