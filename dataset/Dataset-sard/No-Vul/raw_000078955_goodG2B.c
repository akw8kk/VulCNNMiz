static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    goto VAR4;
VAR4:
    
    VAR1 = VAR2;
    {
        size_t VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR3'', 100-1); 
        VAR6[100-1] = VAR3''; 
        
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR6[VAR5] = VAR1[VAR5];
        }
        
        VAR6[100-1] = VAR3'';
        FUN2(VAR6);
    }
}