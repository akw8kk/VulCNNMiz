static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR2, VAR4'', 50-1); 
    VAR2[50-1] = VAR4''; 
    wmemset(VAR3, VAR4'', 100-1); 
    VAR3[100-1] = VAR4''; 
    if(VAR5)
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
    }
    {
        size_t VAR6, VAR7;
        wchar_t VAR8[100];
        wmemset(VAR8, VAR4'', 100-1);
        VAR8[100-1] = VAR4''; 
        VAR7 = wcslen(VAR8);
        
        for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        {
            VAR8[VAR6] = VAR1[VAR6];
        }
        VAR8[100-1] = VAR4'';
        FUN4(VAR8);
    }
}