static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR4;
        VAR2[0] = VAR5''; 
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        
        
        wcsncpy(VAR2, VAR6, wcslen(VAR6) + 1);
        FUN3(VAR2);
    }
}