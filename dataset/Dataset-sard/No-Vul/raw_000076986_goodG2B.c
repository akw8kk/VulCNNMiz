static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[50];
    wchar_t VAR4[100];
    wmemset(VAR3, VAR5'', 50-1); 
    VAR3[50-1] = VAR5''; 
    wmemset(VAR4, VAR5'', 100-1); 
    VAR4[100-1] = VAR5''; 
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR4;
    }
    {
        wchar_t VAR6[100];
        wmemset(VAR6, VAR5'', 100-1);
        VAR6[100-1] = VAR5''; 
        
        memcpy(VAR6, VAR2, wcslen(VAR6)*sizeof(wchar_t));
        VAR6[100-1] = VAR5'';
        FUN2(VAR6);
    }
}