static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(VAR2!=5)
    {
        
        FUN2("");
    }
    else
    {
        {
            wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
            wmemset(VAR3, VAR4'', 100-1);
            VAR3[100-1] = VAR4'';
            
            VAR1 = VAR3;
        }
    }
    {
        size_t VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR4'', 100-1); 
        VAR6[100-1] = VAR4''; 
        
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR6[VAR5] = VAR1[VAR5];
        }
        
        VAR6[100-1] = VAR4'';
        FUN3(VAR6);
        
    }
}