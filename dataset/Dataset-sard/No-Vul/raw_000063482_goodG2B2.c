static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(FUN3())
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[10+1] = VAR6;
        size_t VAR7, VAR8;
        VAR8 = wcslen(VAR5);
        
        
        for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
        {
            VAR1[VAR7] = VAR5[VAR7];
        }
        FUN4(VAR1);
    }
}