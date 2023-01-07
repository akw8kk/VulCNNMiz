static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR2, VAR4'', 50-1); 
    VAR2[50-1] = VAR4''; 
    wmemset(VAR3, VAR4'', 100-1); 
    VAR3[100-1] = VAR4''; 
    if(5!=5)
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
    }
    {
        size_t VAR5, VAR6;
        wchar_t VAR7[100];
        wmemset(VAR7, VAR4'', 100-1);
        VAR7[100-1] = VAR4''; 
        VAR6 = wcslen(VAR7);
        
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR7[VAR5] = VAR1[VAR5];
        }
        VAR7[100-1] = VAR4'';
        FUN4(VAR7);
    }
}