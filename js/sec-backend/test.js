function Mahasiswa(nama,energy){
  mahasiswa = {};
  mahasiswa.nama = nama;
  mahasiswa.energy = energy;

  mahasiswa.makan = function (porsi){
    mahasiswa.energy += porsi;
    console.log(`Halo ${this.nama}, selamat makan`);
  }

  mahasiswa.main = function(jam){
    mahasiswa.energy -= jam;
    console.log(`Halo ${this.nama}, selamat bermain`);
  }
  mahasiswa.id = function(){
    console.log(`Nama : ${this.nama}, Energy : ${this.energy}`);
  }
  return mahasiswa;
}

fanan = Mahasiswa('fanan',100);
fanan.id();
fanan.makan(30);
fanan.id();
fanan.main(40);
fanan.id();
// fanan

// npm run init
// npm install --save-dev nodemon
// npm run dev