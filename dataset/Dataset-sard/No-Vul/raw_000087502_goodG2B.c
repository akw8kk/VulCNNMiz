static void FUN1()
{
    int VAR1;
    int VAR2;
    
    VAR2 = -1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = 100-1;
    }
    {
        char VAR3[100];
        char VAR4[100] = "";
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        if (VAR2 < 100)
        {
            
            memcpy(VAR4, VAR3, VAR2);
            VAR4[VAR2] = ''; 
        }
        FUN2(VAR4);
    }
}