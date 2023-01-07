void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        {
            wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
            wmemset(VAR2, VAR3'', 50-1);
            VAR2[50-1] = VAR3'';
            
            VAR1 = (void *)VAR2;
        }
    }
    else
    {
        {
            char * VAR4 = (char *)malloc(50*sizeof(char));
            memset(VAR4, '', 50-1);
            VAR4[50-1] = '';
            
            VAR1 = (void *)VAR4;
        }
    }
    if(FUN2())
    {
        {
            
            size_t VAR5 = strlen((char *)VAR1);
            void * VAR6 = (void *)calloc(VAR5+1, 1);
            memcpy(VAR6, VAR1, (VAR5+1));
            FUN3((char *)VAR6);
            free(VAR6);
        }
    }
    else
    {
        {
            
            size_t VAR5 = wcslen((wchar_t *)VAR1);
            void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
            memcpy(VAR6, VAR1, (VAR5+1)*sizeof(wchar_t));
            FUN4((wchar_t *)VAR6);
            free(VAR6);
        }
    }
}