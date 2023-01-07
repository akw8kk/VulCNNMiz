void FUN1()
{
    {
        wchar_t VAR1[150], VAR2[100];
        
        wmemset(VAR1, VAR3'', 149);
        VAR1[149] = VAR3'';
        memcpy(VAR2, VAR1, 99*sizeof(wchar_t));
        
        FUN2(VAR2);
    }
}