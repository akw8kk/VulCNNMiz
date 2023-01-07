static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    VAR2 = 0; 
    VAR1 = FUN2(VAR1);
    {
        char VAR3[100];
        char VAR4[100] = "";
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        if (VAR1 < 100)
        {
            
            memcpy(VAR4, VAR3, VAR1);
            VAR4[VAR1] = ''; 
        }
        FUN3(VAR4);
    }
}