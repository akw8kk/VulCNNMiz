static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = 100-1;
    }
    {
        char VAR2[100];
        char VAR3[100] = "";
        memset(VAR2, '', 100-1);
        VAR2[100-1] = '';
        if (VAR1 < 100)
        {
            
            memcpy(VAR3, VAR2, VAR1);
            VAR3[VAR1] = ''; 
        }
        FUN3(VAR3);
    }
}