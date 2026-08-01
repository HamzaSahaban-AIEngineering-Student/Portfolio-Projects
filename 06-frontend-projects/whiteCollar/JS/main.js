//   for the header li(pages)
const openBtn = document.getElementById('openMenu');   
const closeBtn = document.getElementById('closeMenu'); 
const menu = document.getElementById('menu');         

if (openBtn && menu) {
    openBtn.addEventListener('click', function (e) {
    e.stopPropagation();
    menu.classList.add('open');    
    });
    }
if (closeBtn && menu) {
    closeBtn.addEventListener('click', function (e) {
        e.stopPropagation();
        menu.classList.remove('open'); 
    });
}
if (menu) {
    const links = menu.querySelectorAll('a');
    links.forEach(link => {
        link.addEventListener('click', () => {
            menu.classList.remove('open'); 
        });
    });
}

document.addEventListener('keydown', function (e) {
    if (e.key === 'Escape' && menu && menu.classList.contains('open')) {
        menu.classList.remove('open');
    }
});

    document.getElementById('pages').addEventListener('change', function() {
    if (this.value) {
        window.location.href = this.value;
    }
});


// for faq page
let faqItems = document.querySelectorAll('.faq-item');

faqItems.forEach(item => {
    let question = item.querySelector('.faq-question');
    let answer = item.querySelector('.faq-answer');
    let arrow = question.querySelector('span');

question.addEventListener('click', () => {
    let isOpen = answer.style.display === 'block';

        // تبديل العنصر الحالي
        if (!isOpen) {
            answer.style.display = 'block';
            question.classList.add('active');
        } else {
            answer.style.display = 'none';
            question.classList.remove('active');
        }
    });
});
