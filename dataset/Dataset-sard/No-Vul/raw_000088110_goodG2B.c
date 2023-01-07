static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    
    VAR1 = 100-1;
    {
        char VAR2[100];
        char VAR3[100] = "";
        memset(VAR2, '', 100-1);
        VAR2[100-1] = '';
        if (VAR1 < 100)
        {
            
            memmove(VAR3, VAR2, VAR1);
            VAR3[VAR1] = ''; 
        }
        FUN2(VAR3);
    }
}